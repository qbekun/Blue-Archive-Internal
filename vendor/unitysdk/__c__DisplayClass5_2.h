#pragma once
#include "unitysdk.h"

namespace MXField::Shared::Data { class FieldCurtainCallFreeModeInfo; }

#define <>C__DISPLAYCLASS5_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xE74420)
#define <>C__DISPLAYCLASS5_2__TRYGETSEASONFREEMODEINFOS_B__6_OFFSET UNITYSDK_OFFSET(0xE74590)

	inline static constexpr unsigned int <>c__DisplayClass5_2_TypeDefinitionIndex = 10555;

	class <>c__DisplayClass5_2 : public Il2CppObject
	{
	public:
		::System::Int64 curtainCallDateId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS5_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetSeasonFreeModeInfos_b__6(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS5_2__TRYGETSEASONFREEMODEINFOS_B__6_OFFSET))(arg, nullptr);
		}

	};

