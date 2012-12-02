# Example C extension for ruby
## Task
Write a simple hello world extension for ruby.  After the extension is install one can
require the helloworld extension and call print method:

## How to run
	require 'helloworld'
	p Helloworld.print

## How to build
	ruby extconf.rb
	make
	make install
