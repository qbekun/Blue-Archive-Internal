#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class GachaCountType;
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UIFREEGACHADISPLAY_GET_ISCOMPLETETUTORIAL_OFFSET UNITYSDK_OFFSET(0xA76430)
#define UIFREEGACHADISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA764E0)
#define UIFREEGACHADISPLAY_ISGACHAFREEANDSETDATA_OFFSET UNITYSDK_OFFSET(0xA73100)

	inline static constexpr unsigned int UIFreeGachaDisplay_TypeDefinitionIndex = 7866;

	class UIFreeGachaDisplay : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* gachaFreeEndDayRoot; // 0x18
		UILabel* gachaFreeEndDayLabel; // 0x20

		::System::Boolean get_isCompleteTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFREEGACHADISPLAY_GET_ISCOMPLETETUTORIAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFREEGACHADISPLAY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* IsGachaFreeAndSetData(GachaCountType* arg, ::MX::Data::Excel::ShopRecruitExcel* arg2, ::System::Int64 arg3)
		{
			return ((Il2CppObject*(*)(GachaCountType*, ::MX::Data::Excel::ShopRecruitExcel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFREEGACHADISPLAY_ISGACHAFREEANDSETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

