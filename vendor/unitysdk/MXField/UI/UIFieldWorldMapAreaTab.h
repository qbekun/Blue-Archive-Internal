#pragma once
#include "../../unitysdk.h"

class LongTabController;

#define MXFIELD_UI_UIFIELDWORLDMAPAREATAB_GET_CURRENTAREAID_OFFSET UNITYSDK_OFFSET(0xEA6A20)
#define MXFIELD_UI_UIFIELDWORLDMAPAREATAB_REFRESH_OFFSET UNITYSDK_OFFSET(0xEA6A80)
#define MXFIELD_UI_UIFIELDWORLDMAPAREATAB_STARTIMPL_OFFSET UNITYSDK_OFFSET(0xEA6B80)
#define MXFIELD_UI_UIFIELDWORLDMAPAREATAB_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA6CB0)
#define MXFIELD_UI_UIFIELDWORLDMAPAREATAB_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xEA6CC0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldWorldMapAreaTab_TypeDefinitionIndex = 10758;

	class UIFieldWorldMapAreaTab : public Il2CppObject
	{
	public:
		LongTabController* tabController; // 0x20

		::System::Int64 get_CurrentAreaId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPAREATAB_GET_CURRENTAREAID_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPAREATAB_REFRESH_OFFSET))(nullptr);
		}

		::System::Void StartImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPAREATAB_STARTIMPL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPAREATAB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPAREATAB_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

