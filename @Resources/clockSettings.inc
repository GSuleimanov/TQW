@Include=#@#shared.ini

[day]
Y=(#PWORKAREAHEIGHT#/2-#clockSize#*#fontOffset#-#dateSize#*#fontOffset#)
X=(#PWORKAREAWIDTH#/2)
StringAlign=Center
StringCase=Proper
FontSize=#dateSize#
FontColor=#gray600#
DragGroup=clocks
[clock]
Y=(#PWORKAREAHEIGHT#/2-#clockSize#*#fontOffset#)
X=(#PWORKAREAWIDTH#/2)
StringAlign=Center
FontSize=#clockSize#
FontColor=#gray600#
InlineSetting=GradientColor | 45 | #gray900#,0 ; 0.0 | #gray700#,255 ; 0.5 | #gray700#,255 ; 1.0
InlinePattern=\d\d$
DragGroup=clocks
[date]
Y=(#PWORKAREAHEIGHT#/2+#clockSize#*#fontOffset#-#dateSize#*#fontOffset#)
X=(#PWORKAREAWIDTH#/2)
StringAlign=Center
FontSize=#dateSize#
FontColor=#gray700#
DragGroup=clocks