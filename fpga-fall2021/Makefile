slides.pdf: slides.md
	pandoc -f markdown -t beamer -o slides.pdf slides.md

register_tb.vvp: register_tb.v
	iverilog -o $@ $<
