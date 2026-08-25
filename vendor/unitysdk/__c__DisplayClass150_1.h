#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define <>C__DISPLAYCLASS150_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x200A230)
#define <>C__DISPLAYCLASS150_1__SYNCRESULT_B__1_OFFSET UNITYSDK_OFFSET(0x200A240)

	inline static constexpr unsigned int <>c__DisplayClass150_1_TypeDefinitionIndex = 3129;

	class <>c__DisplayClass150_1 : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* x; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS150_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SyncResult_b__1(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS150_1__SYNCRESULT_B__1_OFFSET))(arg, nullptr);
		}

	};

