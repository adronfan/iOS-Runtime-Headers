/* Generated by RuntimeBrowser
   Image: /usr/lib/system/introspection/libdispatch.dylib
 */

@interface OS_dispatch_source : OS_dispatch_object <OS_dispatch_object, OS_dispatch_source, OS_dispatch_source_data_add, OS_dispatch_source_data_or, OS_dispatch_source_interval, OS_dispatch_source_mach_recv, OS_dispatch_source_mach_send, OS_dispatch_source_memorypressure, OS_dispatch_source_proc, OS_dispatch_source_read, OS_dispatch_source_signal, OS_dispatch_source_timer, OS_dispatch_source_timer_with_aggregate, OS_dispatch_source_vnode, OS_dispatch_source_write>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

// Image: /usr/lib/system/introspection/libdispatch.dylib

+ (void)load;

- (void)_xref_dispose;
- (id)init;

// Image: /System/Library/PrivateFrameworks/Swift/libswiftDispatch.dylib

+ (id)makeMachReceiveSourceWithPort:(unsigned int)arg1 queue:(id)arg2;
+ (id)makeReadSourceWithFileDescriptor:(int)arg1 queue:(id)arg2;
+ (id)makeSignalSourceWithSignal:(int)arg1 queue:(id)arg2;
+ (id)makeUserDataAddSourceWithQueue:(id)arg1;
+ (id)makeUserDataOrSourceWithQueue:(id)arg1;
+ (id)makeWriteSourceWithFileDescriptor:(int)arg1 queue:(id)arg2;

@end
