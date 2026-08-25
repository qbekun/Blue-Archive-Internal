#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCSectionVisual; }
namespace MXUnderCover { class UCPlayerModel; }

#define <>C__DISPLAYCLASS131_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBB590)
#define <>C__DISPLAYCLASS131_0__CO_UNLOADUNUSEDSECTION_B__0_OFFSET UNITYSDK_OFFSET(0xDBB5A0)

	inline static constexpr unsigned int <>c__DisplayClass131_0_TypeDefinitionIndex = 9986;

	class <>c__DisplayClass131_0 : public Il2CppObject
	{
	public:
		::MXUnderCover::UCSectionVisual* visual; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS131_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _co_UnloadUnusedSection_b__0(::MXUnderCover::UCPlayerModel* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCPlayerModel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS131_0__CO_UNLOADUNUSEDSECTION_B__0_OFFSET))(arg, nullptr);
		}

	};

