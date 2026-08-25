#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define <>C__DISPLAYCLASS7_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x18057E0)
#define <>C__DISPLAYCLASS7_2__RUNINBATCHES_B__2_OFFSET UNITYSDK_OFFSET(0x18057F0)

	inline static constexpr unsigned int <>c__DisplayClass7_2_TypeDefinitionIndex = 15685;

	class <>c__DisplayClass7_2 : public Il2CppObject
	{
	public:
		Il2CppObject* taskFactory; // 0x10
		::System::String* localName; // 0x18
		<>c__DisplayClass7_0* CS$__8__locals1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS7_2_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* _RunInBatches_b__2()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS7_2__RUNINBATCHES_B__2_OFFSET))(nullptr);
		}

	};

