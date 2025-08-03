set number
set tabstop=4
set shiftwidth=4
set noexpandtab
set list
set listchars=tab:\ \ ›,nbsp:·,trail:·
set mouse=a

" Es esto lo que marca que no me pase de 80 lineas?
highlight OverLength ctermbg=darkred ctermfg=white guibg=#FFD9D9
match OverLength /\%80v.*/

"Show line number on screen
set number

"Automatically switch between relative and absolute line numbers
:augroup numbertoggle
:  autocmd!
:  autocmd BufEnter,FocusGained,InsertLeave,WinEnter * if &nu && mode() != "i" | set rnu   | endif
:  autocmd BufLeave,FocusLost,InsertEnter,WinLeave   * if &nu                  | set nornu | endif
:augroup END
let g:c_formatter_42_set_equalprg=1
