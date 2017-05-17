'use strict';

var gulp = require('gulp');
var sourcemaps = require('gulp-sourcemaps');
var sass = require('gulp-sass');
var filter = require('gulp-filter');
var browserSync = require('browser-sync');

gulp.task('default', function () {

});

gulp.task('sass', function () {
  return gulp.src('sass/**/*.scss')
    .pipe(sourcemaps.init())
    .pipe(sass({
      outputStyle: 'compressed',
      // outputStyle: 'nested',
      precision: 10,
    }).on('error', sass.logError))
    .pipe(sourcemaps.write())
    .pipe(gulp.dest('css'))
    .pipe(filter('sass**/*.css'))
    .pipe(browserSync.reload({stream:true}));
});

gulp.task('watch', function () {
  gulp.watch('./sass/**/*.scss', ['sass']);
});
