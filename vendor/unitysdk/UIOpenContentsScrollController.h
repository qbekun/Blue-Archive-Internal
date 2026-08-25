#pragma once
#include "unitysdk.h"

#define UIOPENCONTENTSSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2717860)
#define UIOPENCONTENTSSCROLLCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x27178A0)
#define UIOPENCONTENTSSCROLLCONTROLLER_CREATEOPENCONTENTSSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x2717A10)
#define UIOPENCONTENTSSCROLLCONTROLLER_HASVALIDCONTENTS_OFFSET UNITYSDK_OFFSET(0x2717D20)

	inline static constexpr unsigned int UIOpenContentsScrollController_TypeDefinitionIndex = 7142;

	class UIOpenContentsScrollController : public SmallXmlNodeList
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPENCONTENTSSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENCONTENTSSCROLLCONTROLLER_REFRESH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateOpenContentsScrollItems(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENCONTENTSSCROLLCONTROLLER_CREATEOPENCONTENTSSCROLLITEMS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasValidContents(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIOPENCONTENTSSCROLLCONTROLLER_HASVALIDCONTENTS_OFFSET))(arg, nullptr);
		}

	};

