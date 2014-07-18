<?php include 'page.header.inc'; ?>

<div id='content'><div class='page-region'>
  <?php if ($action_links): ?>
    <ul class='action-links links clearfix'><?php print render($action_links) ?></ul>
  <?php endif; ?>
  <?php if (!empty($page['content'])): ?>
    <div class='page-content content-wrapper clearfix'><?php print render($page['content']) ?></div>
  <?php endif; ?>
</div></div>
<div id='right'><div class='page-region'>
  <?php if (!empty($page['right'])) print render($page['right']) ?>
</div></div>

<?php include 'page.footer.inc'; ?>

