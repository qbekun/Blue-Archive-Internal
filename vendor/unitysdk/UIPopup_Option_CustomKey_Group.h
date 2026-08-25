#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITable;
namespace FlatData { class DisplayGroupType; }

#define UIPOPUP_OPTION_CUSTOMKEY_GROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2195680)
#define UIPOPUP_OPTION_CUSTOMKEY_GROUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2194B30)

	inline static constexpr unsigned int UIPopup_Option_CustomKey_Group_TypeDefinitionIndex = 4114;

	class UIPopup_Option_CustomKey_Group : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* _titleListObj; // 0x18
		::UnityEngine::GameObject* _listObj; // 0x20
		UITable* _table; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_GROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::FlatData::DisplayGroupType* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatData::DisplayGroupType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_GROUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

