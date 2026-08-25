#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MiniGameAudioAnimatorExcel; }

#define <>C__DISPLAYCLASS9_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1465AB0)

	inline static constexpr unsigned int <>c__DisplayClass9_0_TypeDefinitionIndex = 15089;

	class <>c__DisplayClass9_0 : public Il2CppObject
	{
	public:
		::System::Int32 loadCount; // 0x10
		::MX::Data::Excel::MiniGameAudioAnimatorExcel* excel; // 0x18
		Il2CppObject* audioPlayInfos; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS9_0_.CTOR_OFFSET))(nullptr);
		}

	};

