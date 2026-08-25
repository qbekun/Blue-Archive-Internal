#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIScrollView;
class UITable;
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define UISKILLLEVELUPADDITIONALSKILLPAIRS_SETDATA_OFFSET UNITYSDK_OFFSET(0x22EB6A0)
#define UISKILLLEVELUPADDITIONALSKILLPAIRS_.CTOR_OFFSET UNITYSDK_OFFSET(0x22EC800)
#define UISKILLLEVELUPADDITIONALSKILLPAIRS_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x22EC810)
#define UISKILLLEVELUPADDITIONALSKILLPAIRS_GET_PARENTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x22EC880)
#define UISKILLLEVELUPADDITIONALSKILLPAIRS_GET_PARENTTABLE_OFFSET UNITYSDK_OFFSET(0x22EC910)
#define UISKILLLEVELUPADDITIONALSKILLPAIRS_GET_PAIRS_OFFSET UNITYSDK_OFFSET(0x22EC240)

	inline static constexpr unsigned int UISkillLevelUpAdditionalSkillPairs_TypeDefinitionIndex = 4880;

	class UISkillLevelUpAdditionalSkillPairs : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* currentLevelTitle; // 0x18
		::UnityEngine::GameObject* targetLevelTitle; // 0x20
		::System::Boolean ResetParentPosition; // 0x28
		Il2CppObject* pairs; // 0x30
		UIScrollView* parentScrollView; // 0x38
		UITable* parentTable; // 0x40
		UITable* table; // 0x48

		::System::Void SetData(::System::String* str, ::System::Int64 arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIRS_SETDATA_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIRS_.CTOR_OFFSET))(nullptr);
		}

		UITable* get_Table()
		{
			return ((UITable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIRS_GET_TABLE_OFFSET))(nullptr);
		}

		UIScrollView* get_ParentScrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIRS_GET_PARENTSCROLLVIEW_OFFSET))(nullptr);
		}

		UITable* get_ParentTable()
		{
			return ((UITable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIRS_GET_PARENTTABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Pairs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLPAIRS_GET_PAIRS_OFFSET))(nullptr);
		}

	};

