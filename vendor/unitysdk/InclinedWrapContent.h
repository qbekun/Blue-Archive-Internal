#pragma once
#include "unitysdk.h"

class InclinedScrollViewElement;

#define INCLINEDWRAPCONTENT_REFRESH_OFFSET UNITYSDK_OFFSET(0x2056760)
#define INCLINEDWRAPCONTENT_ADD_OFFSET UNITYSDK_OFFSET(0x20564D0)
#define INCLINEDWRAPCONTENT_SORTBASEDONSCROLLMOVEMENT_OFFSET UNITYSDK_OFFSET(0x2056A20)
#define INCLINEDWRAPCONTENT_WRAPCONTENT_OFFSET UNITYSDK_OFFSET(0x2056A40)
#define INCLINEDWRAPCONTENT_SORTALPHABETICALLY_OFFSET UNITYSDK_OFFSET(0x2056A70)
#define INCLINEDWRAPCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2056A90)
#define INCLINEDWRAPCONTENT_REMOVE_OFFSET UNITYSDK_OFFSET(0x2056650)

	inline static constexpr unsigned int InclinedWrapContent_TypeDefinitionIndex = 3343;

	class InclinedWrapContent : public Il2CppObject
	{
	public:
		Il2CppObject* elements; // 0x78

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDWRAPCONTENT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Add(InclinedScrollViewElement* arg)
		{
			((::System::Void(*)(InclinedScrollViewElement*, ::PVOID))((::PBYTE)hIl2Cpp + INCLINEDWRAPCONTENT_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void SortBasedOnScrollMovement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDWRAPCONTENT_SORTBASEDONSCROLLMOVEMENT_OFFSET))(nullptr);
		}

		::System::Void WrapContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDWRAPCONTENT_WRAPCONTENT_OFFSET))(nullptr);
		}

		::System::Void SortAlphabetically()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDWRAPCONTENT_SORTALPHABETICALLY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDWRAPCONTENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Remove(InclinedScrollViewElement* arg)
		{
			((::System::Void(*)(InclinedScrollViewElement*, ::PVOID))((::PBYTE)hIl2Cpp + INCLINEDWRAPCONTENT_REMOVE_OFFSET))(arg, nullptr);
		}

	};

