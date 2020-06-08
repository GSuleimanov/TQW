[Variables]
clockTop=(#PWORKAREAHEIGHT#/2-#clockSize#*#sansFontHeight#/2)
clockBottom=(#PWORKAREAHEIGHT#/2+#clockSize#*#sansFontHeight#/2)
dateHeight=(#dateSize#*#sansFontHeight#)

[day]
Y=(#clockTop#-25)
X=(#PWORKAREAWIDTH#/2)
StringAlign=Center
StringCase=Proper
FontSize=#dateSize#
FontColor=#gray700#,220
[date]
Y=(#clockTop#-40)
X=(#PWORKAREAWIDTH#/2)
StringAlign=Left
StringStyle=Bold
FontSize=(#dateSize#-25)
FontColor=#gray700#
[clock]
Y=#clockTop#
X=(#PWORKAREAWIDTH#/2)
StringAlign=Center
FontSize=#clockSize#
FontColor=#gray600#
InlineSetting=GradientColor | 45 | #gray900#,0 ; 0.0 | #gray700#,255 ; 0.5 | #gray700#,255 ; 1.0
InlinePattern=\d\d$