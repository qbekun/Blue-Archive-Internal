#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen { class SupportUploadScreenshotResult&; }

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTUPLOADSCREENSHOTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3CD90)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTUPLOADSCREENSHOTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C3CE60)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTUPLOADSCREENSHOTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C3CE70)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTUPLOADSCREENSHOTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C3CF10)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int SupportUploadScreenshotCallback_TypeDefinitionIndex = 26809;

	class SupportUploadScreenshotCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTUPLOADSCREENSHOTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTUPLOADSCREENSHOTCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTUPLOADSCREENSHOTCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTUPLOADSCREENSHOTCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

