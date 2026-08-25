#pragma once
#include "unitysdk.h"

namespace MX::Data { class FieldContentStageInfo; }
namespace MX::Data { class FieldContentStageData; }

#define <GETSTAGEINFOSBYAREAID>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DABB0)
#define <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DB160)
#define <GETSTAGEINFOSBYAREAID>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18DB1C0)
#define <GETSTAGEINFOSBYAREAID>D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x18DB430)
#define <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.FIELDCONTENTSTAGEINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18DB480)
#define <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x18DB490)
#define <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18DB4E0)
#define <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.FIELDCONTENTSTAGEINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18DB4F0)
#define <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18DB5A0)

	inline static constexpr unsigned int <GetStageInfosByAreaId>d__9_TypeDefinitionIndex = 16123;

	class <GetStageInfosByAreaId>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::FieldContentStageInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Data::FieldContentStageData* __4__this; // 0x28
		::System::Int64 seasonId; // 0x30
		::System::Int64 __3__seasonId; // 0x38
		::System::Int64 areaId; // 0x40
		::System::Int64 __3__areaId; // 0x48
		Il2CppObject* __7__wrap1; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOSBYAREAID>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOSBYAREAID>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOSBYAREAID>D__9___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::FieldContentStageInfo* System.Collections.Generic.IEnumerator_MX.Data.FieldContentStageInfo_.get_Current()
		{
			return (return (::MX::Data::FieldContentStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.FIELDCONTENTSTAGEINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.FieldContentStageInfo_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.FIELDCONTENTSTAGEINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOSBYAREAID>D__9_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

