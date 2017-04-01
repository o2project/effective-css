= Reset CSSとは何か

Reset CSSは、Web上のページを読み込んだときに既定で適用されるスタイル宣言（ユーザーエージェントスタイルシートとも呼ばれます）をリセットするためのものです。
Reset CSSは@<kw>{Hard reset}とも呼ばれるユニバーサルセレクタを使ってすべてのmarginとpaddingを0にする手法から始まりました（@<list>{hard-reset-css}）。
そして今日にいたるまでさまざまな手法が開発されています。

//list[hard-reset-css][初期のReset CSSであるHard reset]{
#@mapfile(../codes/reset-css/hard-reset.css)
* {
  margin: 0;
  padding: 0;
}
#@end
//}

== なぜReset CSSを使うのか

Reset CSSが使われる理由としてはブラウザが既定で定義するユーザーエージェントスタイルシートがブラウザによって差異があるためです。
例として@<code>{h1}要素と@<code>{p}要素を定義しただけのHTMLをブラウザで見てみます。
するとFirefoxではセリフがないフォントで表示されています（@<img>{firefox-font}）が、Safariではセリフがあるフォントで表示されます（@<img>{safari-font}）。

//image[firefox-font][Firefoxでプレビューしたときの見た目]{
//}

//image[safari-font][Safariでプレビューしたときの見た目]{
//}

このようにフォント1つとっても差異があります。h1要素やp要素の他にも差異はあるため、それを吸収するために何らかのReset CSSライブラリを使うか、自分で差異を吸収する必要があります。

== Reset CSSを使わない場面

Reset CSSを使う理由として「ブラウザが既定で定義しているCSSの差異を吸収するため」と書きました。
そのためNW.jsやElectronといったChromiumしか存在しない環境ではReset CSSを使う必要はなく、必要に応じて各要素をリセットしたほうがよいです。
