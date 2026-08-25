#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen { class SupportUploadScreenshotCallback; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class SupportUploadScreenshotResult&; }

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTSERVICEUNITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3D080)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTSERVICEUNITY_UPLOADSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x9C3D0A0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTSERVICEUNITY_ONUPLOADSCREENSHOTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C3D390)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTSERVICEUNITY_STATICUPLOADSCREENSHOTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C3CF30)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTSERVICEUNITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C3D420)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int SupportServiceUnity_TypeDefinitionIndex = 26810;

	class SupportServiceUnity : public Il2CppObject
	{
	public:
		::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotCallback* uploadCallback; // 0x0
		::System::Int32 _inface; // 0x10
		Il2CppObject* _uploadHandler; // 0x18
		::System::Runtime::InteropServices::GCHandle* _pinnedImageHandle; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTSERVICEUNITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void UploadScreenshot(::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTSERVICEUNITY_UPLOADSCREENSHOT_OFFSET))(arg, str, str, str, str, str, str, arg, str, arg, nullptr);
		}

		::System::Void OnUploadScreenshotCallback(::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult&* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTSERVICEUNITY_ONUPLOADSCREENSHOTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void StaticUploadScreenshotCallback(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTSERVICEUNITY_STATICUPLOADSCREENSHOTCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_SUPPORTSERVICEUNITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

