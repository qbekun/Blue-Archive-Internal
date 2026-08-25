#pragma once
#include "unitysdk.h"

namespace UnityEngine { class TextMesh; }
namespace MX::TableBoard { class TBGHexaSpawnData; }

#define TBGSPAWNDATAVISUAL_SETTEXT_OFFSET UNITYSDK_OFFSET(0x208CBD0)
#define TBGSPAWNDATAVISUAL_SETHEXATILEPOSITION_OFFSET UNITYSDK_OFFSET(0x208CCF0)
#define TBGSPAWNDATAVISUAL_GET_SPAWNRULEINDEX_OFFSET UNITYSDK_OFFSET(0x208CDB0)
#define TBGSPAWNDATAVISUAL_DESELECT_OFFSET UNITYSDK_OFFSET(0x208CDE0)
#define TBGSPAWNDATAVISUAL_GET_OBJECTINFOINPUT_OFFSET UNITYSDK_OFFSET(0x208CE70)
#define TBGSPAWNDATAVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x208D120)
#define TBGSPAWNDATAVISUAL_SELECT_OFFSET UNITYSDK_OFFSET(0x208D130)

	inline static constexpr unsigned int TBGSpawnDataVisual_TypeDefinitionIndex = 3473;

	class TBGSpawnDataVisual : public Il2CppObject
	{
	public:
		::UnityEngine::TextMesh* textMesh; // 0x18
		::MX::TableBoard::TBGHexaSpawnData* Data; // 0x20

		::System::Void SetText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGSPAWNDATAVISUAL_SETTEXT_OFFSET))(nullptr);
		}

		::System::Void SetHexaTilePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGSPAWNDATAVISUAL_SETHEXATILEPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_SpawnRuleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGSPAWNDATAVISUAL_GET_SPAWNRULEINDEX_OFFSET))(nullptr);
		}

		::System::Void Deselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGSPAWNDATAVISUAL_DESELECT_OFFSET))(nullptr);
		}

		::System::String* get_ObjectInfoInput()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGSPAWNDATAVISUAL_GET_OBJECTINFOINPUT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGSPAWNDATAVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Select()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGSPAWNDATAVISUAL_SELECT_OFFSET))(nullptr);
		}

	};

