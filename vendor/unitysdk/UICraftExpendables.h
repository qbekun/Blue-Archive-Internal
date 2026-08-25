#pragma once
#include "unitysdk.h"

class UINodeEditSection;
class AssetObjectBase;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define UICRAFTEXPENDABLES_GETCRAFTEXP_OFFSET UNITYSDK_OFFSET(0x2390DE0)
#define UICRAFTEXPENDABLES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2391060)
#define UICRAFTEXPENDABLES_ISCANNOTINPUT_OFFSET UNITYSDK_OFFSET(0x2391080)
#define UICRAFTEXPENDABLES_SETDATA_OFFSET UNITYSDK_OFFSET(0x2391490)
#define UICRAFTEXPENDABLES_.CTOR_OFFSET UNITYSDK_OFFSET(0x23917C0)
#define UICRAFTEXPENDABLES_ONCLICKADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0x23917D0)
#define UICRAFTEXPENDABLES_GETPRESSINGREDIENTDELTA_OFFSET UNITYSDK_OFFSET(0x2391B90)
#define UICRAFTEXPENDABLES_GETFILLINGREDIENTDELTA_OFFSET UNITYSDK_OFFSET(0x2391A30)

	inline static constexpr unsigned int UICraftExpendables_TypeDefinitionIndex = 5153;

	class UICraftExpendables : public Il2CppObject
	{
	public:
		UINodeEditSection* nodeEditSection; // 0x98

		::System::Int64 GetCraftExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTEXPENDABLES_GETCRAFTEXP_OFFSET))(nullptr);
		}

		::System::Void Initialize(UINodeEditSection* arg)
		{
			((::System::Void(*)(UINodeEditSection*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTEXPENDABLES_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCanNotInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTEXPENDABLES_ISCANNOTINPUT_OFFSET))(nullptr);
		}

		::System::Void SetData(AssetObjectBase* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, AssetObjectBase* arg3)
		{
			((::System::Void(*)(AssetObjectBase*, ::MX::GameLogic::Parcel::ParcelKeyPair*, AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTEXPENDABLES_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTEXPENDABLES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickAddIngredient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTEXPENDABLES_ONCLICKADDINGREDIENT_OFFSET))(nullptr);
		}

		::System::Int64 GetPressIngredientDelta()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTEXPENDABLES_GETPRESSINGREDIENTDELTA_OFFSET))(nullptr);
		}

		::System::Int64 GetFillIngredientDelta()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTEXPENDABLES_GETFILLINGREDIENTDELTA_OFFSET))(nullptr);
		}

	};

