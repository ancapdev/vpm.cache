



// ============== File layout =============
// - Simple flat structure with entries stored by key name
// - Key encoded in base64
//
// root/..
//     /<key>.entry
//     /<key>.meta

// =============== Meta Data ==============
// - Origin (machine name and IP, user name, process id)
// - Filename
// - Package versions
// - Creation time
// - Last access time
// - Number of accesses

int main(char* argv[], int argc)
{
    // =============== Local ===============
    // - Listen for requests from clients
    // - Add cache entries by hard link if possible, otherwise copy
    // - Remove old cache entries by policy (RLU, or some heuristic based on distance to next node with entry)
    // - Maintain space quota
    // - Maintain directory of cache entries for quick lookup (including remote entries)
    // - If entry found in local cache
    //   - Try to make hard linke to client destination, otherwise copy
    // - If entry found in remote cache
    //   - Copy to local cache and apply local logic
    // - Could keep history of cache requests, to predict next request based on previous entry(ies)
    //   - Potentially keep much longer history than actual cache entries storable within quota
    //   - Can be used to prefetch cache entries from remote nodes
    //   - Most build scenarios follow a linear recipe, which should predict well based on request patterns
    // - Optional: store meta data with cache entries, to allow more user friendly purging

 
    // ============== Remote  ==============
    // - Periodically publish server on network
    // - Maintain list of peers of compatible platform 
    // - Listen for requests from peers
    // - Publish cache updates to peers
    // - Keep local directory of remote cache entries
    // - Could spill to remote when removing, and accept spill from other nodes
    // - Keep track of entry origin, so entries from a particular origin can be purged on the entire network (e.g., in case of a corrupting agent)

    return 0;
}
