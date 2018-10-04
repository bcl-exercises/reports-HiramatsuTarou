set xlabel 'x座標(m)'
set ylabel 'y座標(m)'
plot "ans1.dat" using 1:2 with lines title "オイラー法","ans2.dat" using 1:2 with lines title "理論値"