	fputs(set, file);

	if (!nofirst)
		fputc(first, file);
	fwrite(line, len, 1, file);
	fputs(reset, file);
		emit_line(ecbdata->file,
			  diff_get_color(ecbdata->color_diff, DIFF_FRAGINFO),
			  reset, line, len);
static void show_shortstats(struct diffstat_t* data, struct diff_options *options)
	fprintf(o->file, "%sdiff --git %s %s%s\n", set, a_one, b_two, reset);
		fprintf(o->file, "%snew file mode %06o%s\n", set, two->mode, reset);
			fprintf(o->file, "%s%s%s\n", set, xfrm_msg, reset);
		fprintf(o->file, "%sdeleted file mode %06o%s\n", set, one->mode, reset);
			fprintf(o->file, "%s%s%s\n", set, xfrm_msg, reset);
			fprintf(o->file, "%sold mode %06o%s\n", set, one->mode, reset);
			fprintf(o->file, "%snew mode %06o%s\n", set, two->mode, reset);
			fprintf(o->file, "%s%s%s\n", set, xfrm_msg, reset);
	if (DIFF_OPT_TST(options, QUIET)) {
		DIFF_OPT_SET(options, QUIET);
	if (diff_queued_diff.nr)
	DIFF_OPT_SET(options, HAS_CHANGES);
	DIFF_OPT_SET(options, HAS_CHANGES);