// 2021-11-27
package main

import (
	"fmt"
	"regexp"
)

func main() {
	// ``原生字符串
	buf := `
	
<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">

<!--
  <title>文档 - The Go Programming Language</title>
-->
  <title>文档 - Go 编程语言</title>

<link type="text/css" rel="stylesheet" href="/lib/godoc/style.css">

<link rel="stylesheet" href="/lib/godoc/jquery.treeview.css">
<script type="text/javascript">window.initFuncs = [];</script>
</head>
<body>

<div id='lowframe' style="position: fixed; bottom: 0; left: 0; height: 0; width: 100%; border-top: thin solid grey; background-color: white; overflow: auto;">
...
</div><!-- #lowframe -->

<div id="topbar" class="wide"><div class="container">

<form method="GET" action="/search">
<div id="menu">
<!--
<a href="/doc/">Documents</a>
<a href="/pkg/">Packages</a>
<a href="/project/">The Project</a>
<a href="/help/">Help</a>
<a href="/blog/">Blog</a>
-->
<a href="/doc/">文档</a>
<a href="/pkg/">包</a>
<a href="/project/">项目</a>
<a href="/help/">帮助</a>
<a href="/blog/">博客</a>

<!--
<a id="playgroundButton" href="http://play.golang.org/" title="Show Go Playground">Play</a>
-->
<a id="playgroundButton" href="http://play.golang.org/" title="显示 Go 操场">运行</a>

<!--
<input type="text" id="search" name="q" class="inactive" value="Search" placeholder="Search">
-->
<input type="text" id="search" name="q" class="inactive" value="搜索" placeholder="搜索">
</div>
<!--
<div id="heading"><a href="/">The Go Programming Language</a></div>
-->
<div id="heading"><a href="/">Go 编程语言</a></div>
</form>

</div></div>


<div id="playground" class="play">
	<div class="input"><textarea class="code">package main

import "fmt"

func main() {
	fmt.Println("Hello, 世界")
}</textarea></div>
	<div class="output"></div>
	<div class="buttons">
<!--
		<a class="run" title="Run this code [shift-enter]">Run</a>
		<a class="fmt" title="Format this code">Format</a>
		<a class="share" title="Share this code">Share</a>
-->
		<a class="run" title="运行此代码[Shift-Enter]">运行</a>
		<a class="fmt" title="格式化此代码">格式化</a>
		<a class="share" title="分享此代码">分享</a>
	</div>
</div>


<div id="page" class="wide">
<div class="container">


  <h1>文档</h1>




<div id="nav"></div>




<!--{
	"Title": "Documentation",
	"Path": "/doc/"
}-->

<div class="english">
<p>
The Go programming language is an open source project to make programmers more
productive.
</p>
</div>

<p>
Go 编程语言是一个开源项目，它使程序员更具生产力。
</p>

<div class="english">
<p>
Go is expressive, concise, clean, and efficient. Its concurrency
mechanisms make it easy to write programs that get the most out of multicore
and networked machines, while its novel type system enables flexible and
modular program construction. Go compiles quickly to machine code yet has the
convenience of garbage collection and the power of run-time reflection. It's a
fast, statically typed, compiled language that feels like a dynamically typed,
interpreted language.
</p>
</div>

<p>
Go 语言具有很强的表达能力，它简洁、清晰而高效。得益于其并发机制，
用它编写的程序能够非常有效地利用多核与联网的计算机，其新颖的类型系统则使程序结构变得灵活而模块化。
Go 代码编译成机器码不仅非常迅速，还具有方便的垃圾收集机制和强大的运行时反射机制。
它是一个快速的、静态类型的编译型语言，感觉却像动态类型的解释型语言。
</p>

<div id="manual-nav"></div>

<div class="english">
<h2>Installing Go</h2>
</div>

<h2>安装 Go</h2>

<div class="english">
<h3><a href="/doc/install">Getting Started</a></h3>
<p>
Instructions for downloading and installing the Go compilers, tools, and
libraries.
</p>
</div>

<h3><a href="/doc/install">起步</a></h3>
<p>
下载并安装 Go 编译器、工具与库的说明。
</p>


<div class="english">
<h2 id="learning">Learning Go</h2>
</div>

<h2 id="学习">学习 Go 语言</h2>

<img class="gopher" src="/doc/gopher/doc.png"/>

<div class="english">
<h3 id="go_tour"><a href="//tour.golang.org/">A Tour of Go</a></h3>
<p>
An interactive introduction to Go in three sections.
The first section covers basic syntax and data structures; the second discusses
methods and interfaces; and the third introduces Go's concurrency primitives.
Each section concludes with a few exercises so you can practice what you've
learned. You can <a href="//tour.golang.org/">take the tour online</a> or
<a href="//code.google.com/p/go-tour/">install it locally</a>.
</p>
</div>


<h3 id="go_tour"><a href="//go-tour-zh.appspot.com/">Go 语言之旅</a></h3>
<p>
Go 语言的交互式简介，它分为三节。第一节覆盖了基本语法及数据结构，第二节讨论了方法与接口，
第三节则简单介绍了 Go 的并发原语。每节末尾都有几个练习，你可以对自己的所学进行实践。
你可以 <a href="http://go-tour-zh.appspot.com/">在线学习</a> 或
<a href="https://bitbucket.org/mikespook/go-tour-zh/">安装到本地</a>。
</p>

<div class="english">
<h3 id="code"><a href="code.html">How to write Go code</a></h3>
<p>
Also available as a
<a href="//www.youtube.com/watch?v=XCsL89YtqCs">screencast</a>, this doc
explains how to use the <a href="/cmd/go/">go command</a> to fetch, build, and
install packages, commands, and run tests.
</p>
</div>

<h3 id="code"><a href="code.html">如何使用 Go 编程</a></h3>
<p>
本文档教你如何使用 <a href="/cmd/go/"><code>go</code> 命令</a>来获取、构建并安装包、命令及运行测试，
这些内容也可在<a href="http://www.youtube.com/watch?v=XCsL89YtqCs">此视频</a>中获得。
</p>

<div class="english">
<h3 id="effective_go"><a href="effective_go.html">Effective Go</a></h3>
<p>
A document that gives tips for writing clear, idiomatic Go code.
A must read for any new Go programmer. It augments the tour and
the language specification, both of which should be read first.
</p>
</div>

<h3 id="effective_go"><a href="effective_go.html">实效 Go 编程</a></h3>
<p>
本文档是 Go 语言新手的必读物，它就如何编写清晰而地道的 Go 代码提供一些技巧。
在阅读本文档之前，你应当首先阅读 Go 语言之旅及 Go 编程语言规范，它是对二者的补充。
</p>

<div class="english">
<h3 id="faq"><a href="/doc/faq">Frequently Asked Questions (FAQ)</a></h3>
<p>
Answers to common questions about Go.
</p>
</div>

<h3 id="faq"><a href="/doc/faq">常见问题解答（FAQ）</a></h3>
<p>
关于 Go 的常见问题解答。
</p>

<div class="english">
<h3 id="wiki"><a href="/wiki">The Go Wiki</a></h3>
<p>A wiki maintained by the Go community.</p>
</div>

<h3 id="wiki"><a href="/wiki">Go 维基</a></h3>
<p>由 Go 社区维护的维基。</p>

<div class="english">
<h4 id="learn_more">More</h4>
<p>
See the <a href="/wiki/Learn">Learn</a> page at the <a href="/wiki">Wiki</a>
for more Go learning resources.
</p>
</div>

<h4 id="了解更多">更多</h4>
<p>
更多 Go 的学习资源见<a href="/wiki">维基</a>的<a href="/wiki/Learn">学习</a>页面。
</p>


<div class="english">
<h2 id="references">References</h2>
</div>

<h2 id="资源">资源</h2>

<div class="english">
<h3 id="pkg"><a href="/pkg/">Package Documentation</a></h3>
<p>
The documentation for the Go standard library.
</p>
</div>

<h3 id="包"><a href="/pkg/">包文档</a></h3>
<p>
Go 标准库的文档。
</p>

<div class="english">
<h3 id="cmd"><a href="/doc/cmd">Command Documentation</a></h3>
<p>
The documentation for the Go tools.
</p>
</div>

<h3 id="命令"><a href="/doc/cmd">命令文档</a></h3>
<p>
Go 工具的文档。
</p>

<div class="english">
<h3 id="spec"><a href="/ref/spec">Language Specification</a></h3>
<p>
The official Go Language specification.
</p>
</div>

<h3 id="规范"><a href="/ref/spec">语言规范</a></h3>
<p>
<a href="/ref/spec.old">旧译版</a>
官方 Go 语言规范。
</p>

<div class="english">
<h3 id="go_mem"><a href="/ref/mem">The Go Memory Model</a></h3>
<p>
A document that specifies the conditions under which reads of a variable in
one goroutine can be guaranteed to observe values produced by writes to the
same variable in a different goroutine.
</p>
</div>

<h3 id="内存"><a href="/ref/mem">Go 内存模型</a></h3>
<p>
此文档指定了在一个Go程中，写入一个变量所产生的值，能够保证被另一个Go程所读取的条件。
</p>

<div class="english">
<h3 id="release"><a href="/doc/devel/release.html">Release History</a></h3>
<p>A summary of the changes between Go releases.</p>
</div>

<h3 id="release"><a href="/doc/devel/release.html">发行历史</a></h3>
<p>Go 发行版之间更改的概述。</p>


<div class="english">
<h2 id="articles">Articles</h2>
</div>

<h2 id="文章">文章</h2>

<div class="english">
<h3 id="blog"><a href="//blog.golang.org/">The Go Blog</a></h3>
<p>The official blog of the Go project, featuring news and in-depth articles by
the Go team and guests.</p>
</div>

<h3 id="blog"><a href="//blog.golang.org/">Go 博客</a></h3>
<p>Go 项目的官方博客，由 Go 团队与嘉宾撰写的特色新闻与深入性的文章。</p>

<div class="english">
<h4>Codewalks</h4>
<p>
Guided tours of Go programs.
</p>
<ul>
<li><a href="/doc/codewalk/functions">First-Class Functions in Go</a></li>
<li><a href="/doc/codewalk/markov">Generating arbitrary text: a Markov chain algorithm</a></li>
<li><a href="/doc/codewalk/sharemem">Share Memory by Communicating</a></li>
<li><a href="/doc/articles/wiki/">Writing Web Applications</a> - building a simple web application.</li>
</ul>
</div>

<h4>代码漫步</h4>
<p>
Go程序的旅行指南。
</p>
<ul>
<li><a href="/doc/codewalk/functions">函数</a> - Go 语言中的一等公民</li>
<li><a href="/doc/codewalk/markov">生成任意文本：马尔可夫链算法</a></li>
<li><a href="/doc/codewalk/sharemem">通过通信共享内存</a></li>
<li><a href="/doc/articles/wiki/">编写Web应用</a> - 构建简单的Web应用</li>
</ul>

<div class="english">
<h4>Language</h4>
<ul>
<li><a href="/blog/json-rpc-tale-of-interfaces">JSON-RPC: a tale of interfaces</a></li>
<li><a href="/blog/gos-declaration-syntax">Go's Declaration Syntax</a></li>
<li><a href="/blog/defer-panic-and-recover">Defer, Panic, and Recover</a></li>
<li><a href="/blog/go-concurrency-patterns-timing-out-and">Go Concurrency Patterns: Timing out, moving on</a></li>
<li><a href="/blog/go-slices-usage-and-internals">Go Slices: usage and internals</a></li>
<li><a href="/blog/gif-decoder-exercise-in-go-interfaces">A GIF decoder: an exercise in Go interfaces</a></li>
<li><a href="/blog/error-handling-and-go">Error Handling and Go</a></li>
<li><a href="/blog/organizing-go-code">Organizing Go code</a></li>
</ul>
</div>

<h4>语言</h4>
<ul>
<li><a href="/blog/json-rpc-tale-of-interfaces">JSON-RPC：有关接口的故事</a></li>
<li><a href="/blog/gos-declaration-syntax">Go 的声明语法</a></li>
<li><a href="/blog/defer-panic-and-recover">Defer、Panic 和 Recover</a></li>
<li><a href="/blog/go-concurrency-patterns-timing-out-and">Go 并发模式：超时，继续</a></li>
<li><a href="/blog/go-slices-usage-and-internals">Go 切片：用法和本质</a></li>
<li><a href="/blog/gif-decoder-exercise-in-go-interfaces">GIF 解码器：Go 接口练习</a></li>
<li><a href="/blog/error-handling-and-go">Go 与错误处理</a></li>
<li><a href="/blog/organizing-go-code">组织 Go 代码</a></li>
</ul>

<div class="english">
<h4>Packages</h4>
<ul>
<li><a href="/blog/json-and-go">JSON and Go</a> - using the <a href="/pkg/encoding/json/">json</a> package.</li>
<li><a href="/blog/gobs-of-data">Gobs of data</a> - the design and use of the <a href="/pkg/encoding/gob/">gob</a> package.</li>
<li><a href="/blog/laws-of-reflection">The Laws of Reflection</a> - the fundamentals of the <a href="/pkg/reflect/">reflect</a> package.</li>
<li><a href="/blog/go-image-package">The Go image package</a> - the fundamentals of the <a href="/pkg/image/">image</a> package.</li>
<li><a href="/blog/go-imagedraw-package">The Go image/draw package</a> - the fundamentals of the <a href="/pkg/image/draw/">image/draw</a> package.</li>
</ul>
</div>

<h4>包</h4>
<ul>
<li><a href="/blog/json-and-go">JSON 和 Go</a> - 使用<a href="/pkg/encoding/json/">json</a>包。</li>
<li><a href="/blog/gobs-of-data">数据一坨</a> - <a href="/pkg/encoding/gob/">gob</a>包的设计与使用</li>
<li><a href="/blog/laws-of-reflection">反射法则</a> - <a href="/pkg/reflect/">reflect</a>包基础。</li>
<li><a href="/blog/go-image-package">Go 图像包</a> - <a href="/pkg/image/">image</a>包基础。</li>
<li><a href="/blog/go-imagedraw-package">Go 图像绘制包</a> - <a href="/pkg/image/draw/">image/draw</a>包基础。</li>
</ul>

<div class="english">
<h4>Tools</h4>
<ul>
<li><a href="/doc/articles/go_command.html">About the Go command</a> - why we wrote it, what it is, what it's not, and how to use it.</li>
<li><a href="/blog/c-go-cgo">C? Go? Cgo!</a> - linking against C code with <a href="/cmd/cgo/">cgo</a>.</li>
<li><a href="/doc/gdb">Debugging Go Code with GDB</a></li>
<li><a href="/blog/godoc-documenting-go-code">Godoc: documenting Go code</a> - writing good documentation for <a href="/cmd/godoc/">godoc</a>.</li>
<li><a href="/blog/profiling-go-programs">Profiling Go Programs</a></li>
<li><a href="/doc/articles/race_detector.html">Data Race Detector</a> - a manual for the data race detector.</li>
<li><a href="/blog/race-detector">Introducing the Go Race Detector</a> - an introduction to the race detector.</li>
<li><a href="/doc/asm">A Quick Guide to Go's Assembler</a> - an introduction to the assembler used by Go.</li>
</ul>
</div>

<h4>工具</h4>
<ul>
<li><a href="/doc/articles/go_command.html">关于 Go 命令</a> - 为什么写它？它是什么？它不是什么？它怎么用？</li>
<li><a href="/blog/c-go-cgo">C? Go? Cgo!</a> - 使用<a href="/cmd/cgo/">cgo</a>连接 C 代码。</li>
<li><a href="/doc/gdb">使用GDB调试Go代码</a></li>
<li><a href="/blog/godoc-documenting-go-code">Godoc：编写 Go 代码文档</a> - 为<a href="/cmd/godoc/">godoc</a>编写好的文档。</li>
<li><a href="/blog/profiling-go-programs">Go 程序性能分析</a></li>
<li><a href="/doc/articles/race_detector.html">数据竞态检测器</a> - 测试竞态条件下的 Go 程序。</li>
<li><a href="/blog/race-detector">Go 竞态检测器介绍</a> - 对竞态检测器的介绍。</li>
<li><a href="/doc/asm">Go 汇编器快速指南</a> - 对 Go 使用的汇编的介绍。</li>
</ul>

<div class="english">
<h4 id="articles_more">More</h4>
<p>
See the <a href="/wiki/Articles">Articles page</a> at the
<a href="/wiki">Wiki</a> for more Go articles.
</p>
</div>

<h4 id="更多文章">更多</h4>
<p>
更多关于 Go 的文章见<a href="/wiki">维基</a>的<a href="/wiki/Articles">文章页面</a>。
</p>


<div class="english">
<h2 id="talks">Talks</h2>
</div>

<h2 id="talks">演讲</h2>

<img class="gopher" src="/doc/gopher/talks.png"/>

<div class="english">
<h3 id="video_tour_of_go"><a href="http://research.swtch.com/gotour">A Video Tour of Go</a></h3>
<p>
Three things that make Go fast, fun, and productive:
interfaces, reflection, and concurrency. Builds a toy web crawler to
demonstrate these.
</p>
</div>

<h3 id="Go视频教程"><a href="http://research.swtch.com/gotour">Go 视频教程</a></h3>
<p>
有三样东西使得 Go 快速、有趣而高效：接口、反射与并发。我们将通过构建一个玩具网络爬虫来展示它们。
</p>

<div class="english">
<h3 id="go_code_that_grows"><a href="//vimeo.com/53221560">Code that grows with grace</a></h3>
<p>
One of Go's key design goals is code adaptability; that it should be easy to take a simple design and build upon it in a clean and natural way. In this talk Andrew Gerrand describes a simple "chat roulette" server that matches pairs of incoming TCP connections, and then use Go's concurrency mechanisms, interfaces, and standard library to extend it with a web interface and other features. While the function of the program changes dramatically, Go's flexibility preserves the original design as it grows.
</p>
</div>

<h3 id="Go代码增长"><a href="//vimeo.com/53221560">代码的优雅增长</a></h3>
<p>
Go 的关键设计目标之一就是代码的适应性，它应当易于得到简单的设计，并以干净而自然的方式构建。
在此演讲中，Andrew Gerrand 描述了一种简单的“轮流聊天”服务，它匹配一对 TCP 接入的连接，
并使用 Go 的并发机制、接口和标准库来为它扩展出 Web 界面和其它特性。当该程序的函数戏剧性地改变后，
Go 的灵活性在它增长时保留了其原始的设计。
</p>

<div class="english">
<h3 id="go_concurrency_patterns"><a href="//www.youtube.com/watch?v=f6kdp27TYZs">Go Concurrency Patterns</a></h3>
<p>
Concurrency is the key to designing high performance network services. Go's concurrency primitives (goroutines and channels) provide a simple and efficient means of expressing concurrent execution. In this talk we see how tricky concurrency problems can be solved gracefully with simple Go code.
</p>
</div>

<h3 id="Go并发模式"><a href="//www.youtube.com/watch?v=f6kdp27TYZs">Go 的并发模式</a></h3>
<p>
并发是设计高性能网络服务的关键。Go 的并发原语（Go程与信道）提供了一个表达并发实行的简单而高效的手段。
在此演讲中，我们将看见如何用简单的 Go 代码优雅地解决棘手的并发问题。
</p>

<div class="english">
<h3 id="advanced_go_concurrency_patterns"><a href="//www.youtube.com/watch?v=QDDwwePbDtw">Advanced Go Concurrency Patterns</a></h3>
<p>
This talk expands on the <i>Go Concurrency Patterns</i> talk to dive deeper into Go's concurrency primitives.
</p>
</div>

<h3 id="Go高级并发模式"><a href="//www.youtube.com/watch?v=QDDwwePbDtw">Go 的高级并发模式</a></h3>
<p>
此演讲是对 <b>Go 的并发模式</b>的进一步扩充，它对 Go 的并发原语进行了更加深入的探讨。
</p>

<div class="english">
<h4 id="talks_more">More</h4>
<p>
See the <a href="/talks">Go Talks site</a> and <a href="/wiki/GoTalks">wiki page</a> for more Go talks.
</p>
</div>

<h4 id="更多演讲">更多</h4>
<p>
更多关于 Go 的演讲见<a href="/talks">Go 演讲网站</a>和<a href="/wiki/GoTalks">维基页面</a>。
</p>


<div class="english">
<h2 id="nonenglish">Non-English Documentation</h2>
<p>
See the <a href="/wiki/NonEnglish">NonEnglish</a> page
at the <a href="/wiki">Wiki</a> for localized
documentation.
</p>
</div>

<h2 id="非英语">非英语文档</h2>
<p>
本地化文档见<a href="/wiki">维基</a>的<a href="/wiki/NonEnglish">非英语</a>页面。
</p>


<!--
<div id="footer">
Build version devel +f22911f Thu Apr 16 05:55:22 2015 +0000.<br>
Except as <a href="https://developers.google.com/site-policies#restrictions">noted</a>,
the content of this page is licensed under the
Creative Commons Attribution 3.0 License,
and code is licensed under a <a href="/LICENSE">BSD license</a>.<br>
<a href="/doc/tos.html">Terms of Service</a> |
<a href="http://www.google.com/intl/en/policies/privacy/">Privacy Policy</a>
</div>
-->
<div id="footer">
构建版本 devel +f22911f Thu Apr 16 05:55:22 2015 +0000.<br>
除<a href="http://code.google.com/policies.html#restrictions">特别注明</a>外，
本页内容均采用知识共享-署名（CC-BY）3.0协议授权，代码采用<a href="/LICENSE">BSD协议</a>授权。<br>
<a href="/doc/tos.html">服务条款</a> |
<a href="http://www.google.com/intl/en/policies/privacy/">隐私政策</a>
</div>

</div><!-- .container -->
</div><!-- #page -->
<div>你好</div>
<div>哈哈</div>
<div>测试</div>
<div>你过来啊</div>

<!-- TODO(adonovan): load these from <head> using "defer" attribute? -->
<script type="text/javascript" src="/lib/godoc/jquery.js"></script>
<script type="text/javascript" src="/lib/godoc/jquery.treeview.js"></script>
<script type="text/javascript" src="/lib/godoc/jquery.treeview.edit.js"></script>


<script type="text/javascript" src="/lib/godoc/playground.js"></script>

<script type="text/javascript" src="/lib/godoc/godocs.js"></script>

<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-58705693-2', 'auto');
  ga('send', 'pageview');
</script>

</body>
</html>
	`
	// 1) 解释正则表达式，+匹配前一个字符的1次或多次
	reg1 := regexp.MustCompile(`<div>(.*)</div>`)
	if reg1 == nil {
		fmt.Println("MustCompile err")
		return
	}

	// 2）根据规则提取关键信息
	result := reg1.FindAllStringSubmatch(buf, -1)
	fmt.Println("result = ", result)

	// 过滤<></>
	for _, text := range result {
		fmt.Println("text[0] = ", text[0]) // 带<></>
		fmt.Println("text[1] = ", text[1]) // 不带<></>
	}
}
