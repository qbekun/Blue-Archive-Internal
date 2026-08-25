#pragma once
#include "unitysdk.h"

class UIInformationPopup;

#define INFORMATIONGROUPOPEN__ONCLICK_B__4_0_OFFSET UNITYSDK_OFFSET(0x2601B20)
#define INFORMATIONGROUPOPEN_SETGROUPID_OFFSET UNITYSDK_OFFSET(0x2601E30)
#define INFORMATIONGROUPOPEN_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2601E40)
#define INFORMATIONGROUPOPEN_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x2601FE0)
#define INFORMATIONGROUPOPEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2601FF0)

	inline static constexpr unsigned int InformationGroupOpen_TypeDefinitionIndex = 6465;

	class InformationGroupOpen : public Il2CppObject
	{
	public:
		::System::Int64 groupID; // 0x18

		::System::Void _OnClick_b__4_0(UIInformationPopup* arg)
		{
			((::System::Void(*)(UIInformationPopup*, ::PVOID))((::PBYTE)hIl2Cpp + INFORMATIONGROUPOPEN__ONCLICK_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INFORMATIONGROUPOPEN_SETGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFORMATIONGROUPOPEN_ONCLICK_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + INFORMATIONGROUPOPEN_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFORMATIONGROUPOPEN_.CTOR_OFFSET))(nullptr);
		}

	};

