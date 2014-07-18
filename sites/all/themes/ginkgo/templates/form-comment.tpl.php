<div class='form form-layout-simple box clearfix'>
  <h2 class='box-title'><?php print t('Add new comment') ?></h2>
  <div class='box-content'>
    <?php print drupal_render_children($form) ?>
    <?php if (!empty($actions)) print drupal_render($actions) ?>
  </div>
</div>
