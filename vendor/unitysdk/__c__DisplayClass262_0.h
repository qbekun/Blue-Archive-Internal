#pragma once
#include "unitysdk.h"

namespace MX::Audio { class VoicePlayer; }

#define <>C__DISPLAYCLASS262_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x120A7B0)
#define <>C__DISPLAYCLASS262_0__PLAYDEADSHADER_B__3_OFFSET UNITYSDK_OFFSET(0x120A7C0)

	inline static constexpr unsigned int <>c__DisplayClass262_0_TypeDefinitionIndex = 967;

	class <>c__DisplayClass262_0 : public Il2CppObject
	{
	public:
		::MX::Audio::VoicePlayer* vp; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS262_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PlayDeadShader_b__3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS262_0__PLAYDEADSHADER_B__3_OFFSET))(nullptr);
		}

	};

