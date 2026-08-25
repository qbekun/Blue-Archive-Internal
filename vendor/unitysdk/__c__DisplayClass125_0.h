#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCSectionSetting; }
namespace MXUnderCover { class UCSectionModel; }

#define <>C__DISPLAYCLASS125_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBA190)
#define <>C__DISPLAYCLASS125_0__ENTERSECTIONASYNC_B__1_OFFSET UNITYSDK_OFFSET(0xDBA1A0)

	inline static constexpr unsigned int <>c__DisplayClass125_0_TypeDefinitionIndex = 9983;

	class <>c__DisplayClass125_0 : public Il2CppObject
	{
	public:
		::MXUnderCover::UCSectionSetting* sectionSetting; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS125_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _EnterSectionAsync_b__1(::MXUnderCover::UCSectionModel* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS125_0__ENTERSECTIONASYNC_B__1_OFFSET))(arg, nullptr);
		}

	};

