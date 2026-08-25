#pragma once
#include "unitysdk.h"

#define UISMALLPARCELLIST_SETLIST_OFFSET UNITYSDK_OFFSET(0x2347A80)
#define UISMALLPARCELLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x2347AE0)
#define UISMALLPARCELLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2347B20)
#define UISMALLPARCELLIST__ONENABLE_B__0_0_OFFSET UNITYSDK_OFFSET(0x2347C00)

	inline static constexpr unsigned int UISmallParcelList_TypeDefinitionIndex = 5004;

	class UISmallParcelList : public ::System::Xml::XmlNamedNodeMap
	{
	public:
		::System::Void SetList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELLIST_SETLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void _OnEnable_b__0_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELLIST__ONENABLE_B__0_0_OFFSET))(arg, nullptr);
		}

	};

