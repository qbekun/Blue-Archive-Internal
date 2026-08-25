#pragma once
#include "unitysdk.h"

namespace MX::Data { class AccountLevelRewardData; }

#define <GETRECEIVABLELEVELREWARDIDS>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0x18730B0)
#define <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x18731B0)
#define <GETRECEIVABLELEVELREWARDIDS>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1873210)
#define <GETRECEIVABLELEVELREWARDIDS>D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1873480)
#define <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.INT64_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18734D0)
#define <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x18734E0)
#define <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1873530)
#define <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.INT64_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1873580)
#define <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1873620)

	inline static constexpr unsigned int <GetReceivableLevelRewardIds>d__8_TypeDefinitionIndex = 15950;

	class <GetReceivableLevelRewardIds>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Int64 __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Data::AccountLevelRewardData* __4__this; // 0x28
		::System::Int32 level; // 0x30
		::System::Int32 __3__level; // 0x34
		Il2CppObject* __7__wrap1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETRECEIVABLELEVELREWARDIDS>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETRECEIVABLELEVELREWARDIDS>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETRECEIVABLELEVELREWARDIDS>D__8___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Int64 System.Collections.Generic.IEnumerator_System.Int64_.get_Current()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.INT64_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Int64_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.INT64_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETRECEIVABLELEVELREWARDIDS>D__8_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

