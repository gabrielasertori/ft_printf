<div align="center">
	<div style="margin-bottom:3%">
		<a href="https://www.42sp.org.br/">
			<img src="./.img/gnl.png" alt="ft_printf logo"/>
		</a>
	</div>
	<div>
		<img src="https://img.shields.io/badge/language-C-blue" />
		<img src="https://img.shields.io/badge/version-10-blue" />
		<img src="https://img.shields.io/badge/grade-100-green" />
	</div>
	<div>
		<a href="https://www.linkedin.com/in/gabriela-sertori-50b390189/">
			<img alt="Gabriela linkedin" src="https://img.shields.io/badge/-gabisertori-blue?style=flat&logo=Linkedin&logoColor=white" />
		</a>
		<a href="https://www.linkedin.com/in/lucas-l-a555bb199/">
			<img alt="Lucas linkedin" src="https://img.shields.io/badge/-krebscoder-blue?style=flat&logo=Linkedin&logoColor=white" />
		</a>
	</div>
	<div>
		<a href="https://github.com/gabrielasertori">
			<img alt="Gabriela Sertori" src="https://img.shields.io/badge/-gabisertori-blue?style=flat&logo=github&logoColor=white" />
		</a>
		<a href="https://github.com/KrebsCoder">
			<img alt="Lucas Krebs" src="https://img.shields.io/badge/-krebscoder-blue?style=flat&logo=github&logoColor=white" />
		</a>
	</div>
</div>

# Printf

This project is part of école 42 projects.

## 🗒️ About

```ft_printf(const char *str, ...)```



## ⌨️ How to compile it

```clang -D BUFFER_SIZE=5 get_next_line.c get_next_line_utils.c main.c -I. && ./a.out```

- The get_next_line.c has the main function.
- The get_next_line_utils.c has auxiliary functions.
- The get_next_line.h has the header with the prototypes of utils.
- main.c has the test.
- -D means that you want to define a macro named...
- BUFFER_SIZE macro determines how many bytes the read function will read from a file descriptor (if = 0 the return value will be null).
- ```I.``` include where is the .h header (in this case, at the same directory that the others). If ommited then you have to write the get_next_line.h file.

## ⭐ Bonus part

GNL version 10 hasn't many bonus part. The instructions are:

- Read from various file descriptors at the same time.
- Use only one static variable.

The standard code already has the bonus part included, it was write considering the above rules.

## 🤝 Contributors

The collab:

<table>
  <tr>
      <td>
	<a href="https://github.com/gabrielasertori">
		<img src="https://avatars.githubusercontent.com/u/64798344?v=4" width="100px" alt="Gabi sertori avatar"/><br>
		<sub><b>Gabi Sertori</b></sub>
	</a>
	</td>
	<td>
		<a href="https://github.com/KrebsCoder">
			<img src="https://avatars.githubusercontent.com/u/69386576?v=4" width="100px" alt="Lucas krebs avatar"/><br>
			<sub><b>Lucas Krebs</b></sub>
		</a>
	</td>
	</tr>
</table>

## 📮 Contact

Please, if you encounter any bug, errors or have any tips, feel free to make contact. Open an issue [here](https://github.com/pair-programming-gabi-krebs/GNL/issues) with the title [bug], [problem], [sugestion] or [update] and describe the issue.
