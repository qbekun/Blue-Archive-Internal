#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Color32; }
class FavorRankStatInfo;

#define UIACADEMYMESSANGERFAVORRANKSTATUNIT_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x21A14C0)
#define UIACADEMYMESSANGERFAVORRANKSTATUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21A1570)
#define UIACADEMYMESSANGERFAVORRANKSTATUNIT_GET_RANKSTAT_OFFSET UNITYSDK_OFFSET(0x21A18E0)
#define UIACADEMYMESSANGERFAVORRANKSTATUNIT_GET_BG_OFFSET UNITYSDK_OFFSET(0x21A1990)
#define UIACADEMYMESSANGERFAVORRANKSTATUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A1A40)

	inline static constexpr unsigned int UIAcademyMessangerFavorRankStatUnit_TypeDefinitionIndex = 4151;

	class UIAcademyMessangerFavorRankStatUnit : public ::System::Xml::Serialization::XmlChoiceIdentifierAttribute
	{
	public:
		UILabel* favorRank; // 0x28
		UILabel* rankStat; // 0x30
		::UnityEngine::GameObject* bg; // 0x38
		::UnityEngine::Color32* appliedColor; // 0x40
		::UnityEngine::Color32* notAppliedColor; // 0x44

		UILabel* get_FavorRank()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATUNIT_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Void SetData(FavorRankStatInfo* arg)
		{
			((::System::Void(*)(FavorRankStatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		UILabel* get_RankStat()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATUNIT_GET_RANKSTAT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Bg()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATUNIT_GET_BG_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORRANKSTATUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

