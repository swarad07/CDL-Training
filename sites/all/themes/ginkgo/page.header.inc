
<div id='global'><div class='limiter clearfix'>
  <?php if (!empty($page['header'])): ?>
    <div id='header' class='dropdown-blocks toggle-blocks clear-block'>
      <?php print render($page['header']); ?>
    </div>
  <?php endif; ?>
  <?php print $breadcrumb ?>
  <?php print $logo ?>
</div></div>

<?php if ($main_menu): ?>
<div id='navigation'><div class='limiter clearfix'>
  <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'features-menu', 'class' => 'links primary-menu'))) ?>
  <?php if (!empty($page['space_tools'])): ?>
    <div id='space-tools'><div class='dropdown-blocks toggle-blocks clearfix'><?php print render($page['space_tools']); ?></div></div>
  <?php endif; ?>
</div></div>
<?php endif; ?>

<div id='page-tools'><div class='limiter clearfix'>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?><h1 <?php print drupal_attributes($title_attr); ?>><?php print $title ?></h1><?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($primary_local_tasks): ?>
    <div class='tabs clearfix'>
      <?php if ($primary_local_tasks): ?>
        <ul class='primary-tabs links clearfix'><?php print render($primary_local_tasks) ?></ul>
      <?php endif; ?>
    </div>
  <?php endif; ?>
  <?php if (!empty($page['page_tools'])): ?><div class='dropdown-blocks toggle-blocks clear-block'><?php print render($page['page_tools']); ?></div><?php endif; ?>
</div></div>

<?php if ($secondary_local_tasks): ?>
  <div id='secondary-tabs'><div class='limiter clearfix'><ul class="secondary-tabs links clearfix"><?php print render($secondary_local_tasks) ?></ul></div></div>
<?php endif; ?>

<?php if ($show_messages && $messages): ?>
  <div id='console'><div class='limiter clearfix'><?php print $messages; ?></div></div>
<?php endif; ?>

<div id='page'><div id='main-content' class='limiter clearfix'>
  <?php if (!empty($page['help'])) print render($page['help']) ?>
  <?php if ($mission): ?><div class="mission"><?php print $mission ?></div><?php endif; ?>

