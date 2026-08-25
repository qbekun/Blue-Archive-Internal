#pragma once
#include "unitysdk.h"

#define EDITORSETTINGS_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0xA193FB0)
#define EDITORSETTINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA196A80)
#define EDITORSETTINGS_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0xA196B20)
#define EDITORSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA196A10)

	inline static constexpr unsigned int EditorSettings_TypeDefinitionIndex = 36261;

	class EditorSettings : public Il2CppObject
	{
	public:
		::System::Double kMinFrameRate; // 0x0
		::System::Double kMaxFrameRate; // 0x8
		::System::Double kDefaultFrameRate; // 0x10
		::System::Double m_Framerate; // 0x10
		::System::Boolean m_ScenePreview; // 0x18

		::System::Void set_frameRate(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + EDITORSETTINGS_SET_FRAMERATE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORSETTINGS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Double get_frameRate()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORSETTINGS_GET_FRAMERATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};

