<?php include 'page.header.inc'; ?>

<div id='content'><div class='page-region clearfix'>
  <?php if ($action_links): ?>
    <ul class='action-links links clearfix'><?php print render($action_links) ?></ul>
  <?php endif; ?>
  <?php if (!empty($page['content'])): ?>
    <div class='page-content clearfix'><?php print render($page['content']) ?></div>
  <?php endif; ?>
</div></div>

<?php include 'page.footer.inc'; ?>

