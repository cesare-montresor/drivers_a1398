#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x32e21920, "module_layout" },
	{ 0xc07e0e2a, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x26087692, "kmalloc_caches" },
	{ 0x88a8187b, "v4l2_event_unsubscribe" },
	{ 0x410253ad, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x49c01b39, "pci_release_region" },
	{ 0x6ababb05, "debugfs_create_dir" },
	{ 0xc5e74216, "release_resource" },
	{ 0x781bc22d, "video_device_release" },
	{ 0x7eae295f, "dma_set_mask" },
	{ 0xa7938ffc, "vb2_wait_for_all_buffers" },
	{ 0xfb14ff3c, "pci_disable_device" },
	{ 0x5eb34374, "v4l2_device_unregister" },
	{ 0x6acf9117, "v4l2_ctrl_handler_free" },
	{ 0x5809fba3, "v4l2_ctrl_new_std" },
	{ 0x7adbb668, "vb2_fop_poll" },
	{ 0x3dff2bc9, "vb2_ioctl_streamon" },
	{ 0x29126269, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x93bbf8f3, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeebcfc4d, "__video_register_device" },
	{ 0xc64d3793, "debugfs_create_file" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0xb3378a7b, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x35b97737, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x42a1c0a4, "v4l2_device_register" },
	{ 0xb417b29d, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1e323c29, "pci_set_master" },
	{ 0x400d1b40, "_dev_warn" },
	{ 0x3977393e, "default_llseek" },
	{ 0xd03da51c, "video_device_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x62984d67, "vb2_fop_mmap" },
	{ 0x20dd6c69, "vb2_ioctl_qbuf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5f6bd9e, "video_unregister_device" },
	{ 0xde80cd09, "ioremap" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0x11156d0e, "v4l2_ctrl_subscribe_event" },
	{ 0x8d7d086d, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x7df9c00c, "debugfs_remove" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8517fe14, "vb2_ioctl_create_bufs" },
	{ 0xd57d358c, "simple_open" },
	{ 0x79161eb9, "_dev_err" },
	{ 0xc63095c, "pci_enable_msi" },
	{ 0x8dca762b, "vb2_ioctl_dqbuf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x800473f, "__cond_resched" },
	{ 0x182f439d, "vb2_plane_cookie" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe6e002cf, "_dev_info" },
	{ 0xbb0906df, "pci_disable_link_state" },
	{ 0xef0c523c, "vb2_fop_release" },
	{ 0x255bf8d6, "video_devdata" },
	{ 0x47be17b7, "debugfs_create_devm_seqfile" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xf5bd9a83, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x233f929e, "pci_unregister_driver" },
	{ 0xf35141b2, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8aaabe19, "v4l2_fh_open" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x57e8f65b, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xafa6bf76, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc8d4362, "pci_disable_msi" },
	{ 0xd58e70dd, "net_rand_noise" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xfd316e47, "v4l2_ctrl_handler_init_class" },
	{ 0xf2bb7d9, "__pci_register_driver" },
	{ 0x7a784b89, "request_firmware" },
	{ 0x21975547, "vb2_ops_wait_finish" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3388bbbe, "vb2_ioctl_expbuf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x179026a, "vb2_ioctl_streamoff" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x8d929026, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9ecba38e, "is_acpi_device_node" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x796bae05, "video_ioctl2" },
	{ 0xe481f2c6, "pci_request_region" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xd804f7b5, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x8465107f, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-sg");

MODULE_ALIAS("pci:v000014E4d00001570sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C7D4F5C792E1E2CB51292C1");
