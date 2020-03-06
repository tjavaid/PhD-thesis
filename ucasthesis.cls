% -----------------------------------------------------------------
% 
% Copyright (C) 2015-2016 Shangwen Lu <louisstuart96@gmail.com>
% 
% This program is free software; you can redistribute it and/or
% modify it under the terms of the GNU General Public License as
% published by the Free Software Foundation; either version 2 of
% the License, or (at your option) any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public
% License along with this program; if not, write to the Free
% Software Foundation, Inc., 59 Temple Place, Suite 330, Boston,
% MA 02111-1307 USA
%
% -----------------------------------------------------------------
\NeedsTeXFormat{LaTeX2e}[1995/12/01]
\ProvidesClass{ucasthesis}
  [2015/10/15 v0.2 ucasthesis
   document class]

% Deal with options for class `ucasthesis`
%%% Options for `ucasthesis` itself
\newif\ifUCAS@numberbib \UCAS@numberbibfalse
\newif\ifUCAS@blankdblpage \UCAS@blankdblpagefalse
\newif\ifUCAS@chappagestyle \UCAS@chappagestylefalse
\DeclareOption{master}{%
  \def\UCAS@value@degree{\UCAS@value@masterdegree}
  \def\UCAS@value@englishdegree{\UCAS@value@englishmasterdegree}
}
\DeclareOption{phd}{%
  \def\UCAS@value@degree{\UCAS@value@phddegree}
  \def\UCAS@value@englishdegree{\UCAS@value@englishphddegree}
}
\DeclareOption{numberstyle}{\UCAS@numberbibtrue}
\DeclareOption{authoryearstyle}{\UCAS@numberbibfalse}
\DeclareOption{simpletoc}{\PassOptionsToPackage{nottoc,notlof,notlot}{tocbibind}}
\DeclareOption{blankdblpage}{\UCAS@blankdblpagetrue}
\DeclareOption{chappagestyle}{\UCAS@chappagestyletrue}
\DeclareOption*{\PassOptionsToClass{\CurrentOption}{ctexbook}}
\ExecuteOptions{phd,authoryearstyle}
\ProcessOptions\relax

% Classes and packages

\LoadClass[UTF8,a4paper,12pt]{\begin{ctexbook}[2014/03/06]
\RequirePackage{ifpdf,ifxetex,keyval}
\RequirePackage{amsmath,amssymb,bm}
\RequirePackage{fancyhdr,tocbibind}
\RequirePackage[dvipsnames]{xcolor}%
\ifUCAS@numberbib% enable numeric citation mode
  \RequirePackage[square,comma,numbers,sort&compress]{natbib}% numeric cite mode
  \bibliographystyle{elsarticle-num-names}% numbered scheme
\else
  \RequirePackage{natbib}% author year citation mode is the default
  \bibliographystyle{elsarticle-harv}% author year scheme
\fi

% Packages depending on engine and driver

\ifxetex % `xunicode` already loaded `graphicx`
  \RequirePackage[xetex]{geometry,hyperref}
\else
  \ifpdf
    \RequirePackage[pdftex]{geometry,hyperref,graphicx}
    \RequirePackage{epstopdf}
  \else
    \RequirePackage[dvipdfm]{geometry}
    \RequirePackage[dvipdfmx]{hyperref,graphicx}
    \RequirePackage{bmpsize}
  \fi
\fi

% Configuration file

\AtEndOfClass{%
  \InputIfFileExists{ucasthesis.cfg}{}{}
}

% Fonts setup

\@ifpackageloaded{fontspec}{%
  \setmainfont{TeX Gyre Termes}
  \setsansfont{TeX Gyre Heros}
  \setmonofont{TeX Gyre Cursor}
  \@ifpackagewith{fontspec}{no-math}{%
    \RequirePackage{newtxmath}
  }{%
    \RequirePackage{unicode-math}
    \setmathfont{TeX Gyre Termes Math}
  }
}{%
  \RequirePackage{newtxtext,newtxmath}
  \RequirePackage[T1]{fontenc}
}

% Default styles

\geometry{hmargin=1.25in,vmargin=1in,headheight=14.5pt}
\setlength{\parskip}{\medskipamount}
\linespread{1.25}
\raggedbottom
\fancypagestyle{UCAShdrstyle}{%
    \fancyhf{}
    \fancyhead[CO]{\small \leftmark}
    \fancyhead[CE]{\small \UCAS@label@university \UCAS@value@degree \UCAS@label@thesis}
    \fancyfoot[C]{\small \thepage}
    \renewcommand{\headrulewidth}{0.4pt}
    \renewcommand{\footrulewidth}{0pt}
}
\let\@@frontmatter\frontmatter \def\frontmatter{\@@frontmatter\pagestyle{UCAShdrstyle}}
\ifUCAS@chappagestyle \ctexset{chapter/pagestyle={UCAShdrstyle}} \fi
\def\cleardoublepage{\clearpage\if@twoside \ifodd\c@page\else%
    \ifUCAS@blankdblpage\thispagestyle{empty}\fi%
    \hbox{}\newpage\if@twocolumn\hbox{}\newpage\fi\fi\fi}
\hypersetup{%
    bookmarksnumbered=true,%
    pdfstartview={FitH},%
    hidelinks%
}
% Pagestyle before \frontmatter
\AtBeginDocument{%
  \pagenumbering{Alph}%
  \pagestyle{empty}
}

% Titlepage options
\newif\ifUCAS@runninghead \UCAS@runningheadfalse

\def\setchinesetitlepage#1{\setkeys{cntitle}{#1}}
\define@key{cntitle}{confidential}{\def\UCAS@value@confidential{#1}}
\define@key{cntitle}{title}{\long\def\UCAS@value@title{#1}}
\define@key{cntitle}{shorttitle}{\UCAS@runningheadtrue \def\UCAS@value@runninghead{#1}}
\define@key{cntitle}{author}{\def\UCAS@value@author{#1}}
\define@key{cntitle}{supervisor}{\def\UCAS@value@supervisor{#1}}
\define@key{cntitle}{supervisortitle}{\def\UCAS@value@supervisortitle{#1}}
\define@key{cntitle}{degreetype}{\def\UCAS@value@degreetype{#1}}
\define@key{cntitle}{major}{\def\UCAS@value@major{#1}}
\define@key{cntitle}{institute}{\def\UCAS@value@institute{#1}}

\def\setenglishtitlepage#1{\setkeys{entitle}{#1}}
\define@key{entitle}{title}{\long\def\UCAS@value@englishtitle{#1}}
\define@key{entitle}{author}{\def\UCAS@value@englishauthor{#1}}
\define@key{entitle}{supervisor}{\def\UCAS@value@englishsupervisor{#1}}
\define@key{entitle}{supervisortitle}{\def\UCAS@value@englishsupervisortitle{#1}}
\define@key{entitle}{major}{\def\UCAS@value@englishmajor{#1}}
\define@key{entitle}{institute}{\def\UCAS@value@englishinstitute{#1}}

% Titlepages

\def\UCASunderline#1#2{\underline{\hbox to #1{\hss #2\hss}}}
\newcommand\makechinesetitle{%
  \thispagestyle{empty}
  \begin{flushright} 
    \heiti\zihao{4} \UCAS@label@confidential \UCASunderline{3em}{\UCAS@value@confidential}
  \end{flushright}
  \vskip \stretch{3}
  \begin{center}
    \includegraphics[width=0.8\textwidth]{\UCAS@value@schoollogo}
    \vskip \stretch{4}
      {\bfseries\zihao{1} \UCAS@value@degree\UCAS@label@thesis}
    \vskip \stretch{4}
      {\bfseries\zihao{3} \CJKunderline*{\UCAS@value@title}}
    \vskip \stretch{6}
    {\fangsong
    \def\tabcolsep{1pt} \def\arraystretch{1.5}
    \begin{tabular}{lc}
      \UCAS@label@author      & \UCASunderline{299pt}{\UCAS@value@author} \\
      \UCAS@label@supervisor  & \UCASunderline{299pt}{\UCAS@value@supervisor~~\UCAS@value@supervisortitle} \\
                              & \UCASunderline{299pt}{\UCAS@value@institute} \\
      \UCAS@label@degree      & \UCASunderline{299pt}{\UCAS@value@degreetype\UCAS@value@degree} \\
      \UCAS@label@major       & \UCASunderline{299pt}{\UCAS@value@major} \\
      \UCAS@label@institute   & \UCASunderline{299pt}{\UCAS@value@institute}
    \end{tabular}
    }
    \vskip \stretch{1}
    {\bfseries\zihao{3} \UCAS@value@chinesedate}
  \end{center}
  \cleardoublepage
}
\let\maketitle\makechinesetitle
\newcommand\makeenglishtitle{%
  \thispagestyle{empty}
  \begin{center}
    \linespread{1.67}\selectfont\bfseries
    \leavevmode
    \vskip \stretch{1}
    {\zihao{1} \uline{\UCAS@value@englishtitle}}
    \vskip \stretch{2}
    {\normalfont By} \\
    {\zihao{3} \UCAS@value@englishauthor}
    \vskip \baselineskip
    {\zihao{4} \UCAS@label@englishstatement}
    \vskip \baselineskip
    {\zihao{4} \UCAS@value@englishinstitute}
    \vskip \baselineskip
    {\zihao{4} \UCAS@value@englishdate}
    \vskip 2\baselineskip
  \end{center}
  \cleardoublepage
}

% Predefined environments and macros

\newenvironment{abstract}{\chapter{\UCAS@label@abstract}}{}
\newcommand\keywords[1]{%
  \vspace{2ex}\noindent{\heiti \UCAS@label@keywords} #1}
\newenvironment{englishabstract}{
  \chapter[\UCAS@label@englishabstract]{\UCAS@value@englishtitle}
  \vskip 5pt
  \begin{center}
    {\normalfont\zihao{4} \UCAS@value@englishauthor\\
    Directed by \UCAS@value@englishsupervisortitle~\UCAS@value@englishsupervisor}
    \vskip 25pt
    \LARGE\bfseries\UCAS@label@englishabstract
  \end{center}
}{}
\newcommand\englishkeywords[1]{%
  \vspace{2ex}\noindent{\bfseries \UCAS@label@englishkeywords} #1}
\newenvironment{publications}[1][\UCAS@label@publications]{\chapter{#1}}{}
\newenvironment{resume}[1][\UCAS@label@resume]{\chapter{#1}}{}
\newenvironment{acknowledgement}[1][\UCAS@label@acknowledgement]{\chapter{#1}}{}

\endinput
