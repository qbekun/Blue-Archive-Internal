#pragma once
#include "unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen { class SupportUploadScreenshotResult; }

#define <>C__DISPLAYCLASS383_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D5E790)
#define <>C__DISPLAYCLASS383_0__UPLOADSCREENSHOT_B__0_OFFSET UNITYSDK_OFFSET(0x9D5F1C0)

	inline static constexpr unsigned int <>c__DisplayClass383_0_TypeDefinitionIndex = 26190;

	class <>c__DisplayClass383_0 : public Il2CppObject
	{
	public:
		Il2CppObject* resultAction; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS383_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _UploadScreenshot_b__0(::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::SupportUploadScreenshotResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS383_0__UPLOADSCREENSHOT_B__0_OFFSET))(arg, nullptr);
		}

	};

