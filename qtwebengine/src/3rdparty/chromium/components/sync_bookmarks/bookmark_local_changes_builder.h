// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SYNC_BOOKMARKS_BOOKMARK_LOCAL_CHANGES_BUILDER_H_
#define COMPONENTS_SYNC_BOOKMARKS_BOOKMARK_LOCAL_CHANGES_BUILDER_H_

#include <vector>

#include "components/sync/engine/non_blocking_sync_common.h"

namespace sync_bookmarks {

class SyncedBookmarkTracker;

class BookmarkLocalChangesBuilder {
 public:
  // |bookmark_tracker| must not be null and must outlive this object.
  explicit BookmarkLocalChangesBuilder(
      const SyncedBookmarkTracker* bookmark_tracker);
  // Builds the commit requests list.
  std::vector<syncer::CommitRequestData> BuildCommitRequests(
      size_t max_entries) const;

 private:
  const SyncedBookmarkTracker* const bookmark_tracker_;

  DISALLOW_COPY_AND_ASSIGN(BookmarkLocalChangesBuilder);
};

}  // namespace sync_bookmarks

#endif  // COMPONENTS_SYNC_BOOKMARKS_BOOKMARK_LOCAL_CHANGES_BUILDER_H_