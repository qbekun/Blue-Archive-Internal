#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class Transform; }
class ButtonActivator;
namespace MX::Data::Excel { class FurnitureExcel; }

#define UITROPHYCOLLECTIONINFO_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB7D990)
#define UITROPHYCOLLECTIONINFO_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0xB7DB10)
#define UITROPHYCOLLECTIONINFO_CLEARINSTANCE_OFFSET UNITYSDK_OFFSET(0xB7DCD0)
#define UITROPHYCOLLECTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB7DD80)
#define UITROPHYCOLLECTIONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xB7C650)
#define UITROPHYCOLLECTIONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xB7DD90)
#define UITROPHYCOLLECTIONINFO_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xB7D220)

	inline static constexpr unsigned int UITrophyCollectionInfo_TypeDefinitionIndex = 8505;

	class UITrophyCollectionInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* NoTrophyRoot; // 0x18
		::UnityEngine::GameObject* HasTrophyRoot; // 0x20
		UILabel* TotalCollectionCount; // 0x28
		::Il2CppArray<::System::Object*>* GroupNames; // 0x30
		UILabel* GroupCollectionCount; // 0x38
		::UnityEngine::Transform* FurnitureRoot; // 0x40
		::UnityEngine::GameObject* NotOwned; // 0x48
		UILabel* FurnitureName; // 0x50
		UILabel* BestRaidRanking; // 0x58
		UILabel* BestRaidRecord; // 0x60
		UILabel* BestEliminateRanking; // 0x68
		UILabel* BestEliminateRecord; // 0x70
		UILabel* FurnitureDesc; // 0x78
		ButtonActivator* InfoButton; // 0x80
		::UnityEngine::GameObject* _FurnitureInstance; // 0x88
		::System::Int64 _CurrentId; // 0x90

		::System::Void CreateInstance(::MX::Data::Excel::FurnitureExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::FurnitureExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFO_CREATEINSTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFO_ONCLICKINFO_OFFSET))(nullptr);
		}

		::System::Void ClearInstance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFO_CLEARINSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONINFO_SETEMPTY_OFFSET))(nullptr);
		}

	};

