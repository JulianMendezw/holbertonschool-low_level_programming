;;disable backup
(setq backup-inhibited t)
;;disable auto save
(setq auto-save-default nil)
;; make {copy, cut, paste, undo} have {C-c, C-x, C-v, C-z} keys
(cua-mode 1)
;; auto insert closing bracket
(electric-pair-mode 1)
;; make cursor movement stop in between camelCase words.
(global-subword-mode 1)
;; make typing delete/overwrites selected text
(delete-selection-mode 1)
;; turn on bracket match highlight
(show-paren-mode 1)
;; remember cursor position. When file is opened, put cursor at last position
(if (version< emacs-version "25.0")
    (progn
      (require 'saveplace)
      (setq-default save-place t))
  (save-place-mode 1))
;; UTF-8 as default encoding
(set-language-environment "UTF-8")
(set-default-coding-systems 'utf-8)
;; diplay line numbers
(when (version<= "26.0.50" emacs-version )
  (global-display-line-numbers-mode))
;; show cursor position within line
(column-number-mode 1)
;; display line number by default
(global-linum-mode t)
;; Display line number wider
(setq linum-format "%3d\u2502 ")
;; set default style for c code
(setq c-default-style "linux"
      c-basic-offset 4)
;; Set line tabs
(setq c-basic-offset 8
      tab-width 8)
;; make tab key always call a indent command.
(setq-default tab-always-indent t)
;; make tab key call indent command or insert tab character, depending on cursor position.
(setq-default tab-always-indent nil)
;; make tab key do indent first then completion.
(setq-default tab-always-indent 'complete)
;; current column along with the line.
(setq column-number-mode t)
;;highlight lines exceeding 80 characters and trailing whitespace.
(require 'whitespace)
(setq whitespace-style '(face empty lines-tail trailing))
(global-whitespace-mode t)
