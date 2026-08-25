#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class Transform; }
namespace MX::Data { class CafeRankExcelInfo; }

#define CAFERANKSTATDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2286590)
#define CAFERANKSTATDISPLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0x22865A0)

	inline static constexpr unsigned int CafeRankStatDisplay_TypeDefinitionIndex = 4673;

	class CafeRankStatDisplay : public Il2CppObject
	{
	public:
		UILabel* rank; // 0x10
		UILabel* maxStudentCount; // 0x18
		UILabel* maxComfort; // 0x20
		UILabel* maxTag; // 0x28
		UILabel* productionGold; // 0x30
		UILabel* storageGold; // 0x38
		::UnityEngine::Transform* productionAPRoot; // 0x40
		UILabel* productionAP; // 0x48
		::UnityEngine::Transform* storageAPRoot; // 0x50
		UILabel* storageAP; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERANKSTATDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::CafeRankExcelInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::CafeRankExcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFERANKSTATDISPLAY_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

