#pragma once
#include "unitysdk.h"

namespace MX::Logic::Equipments { class EquipmentOptionCollection; }
namespace FlatData { class EquipmentOptionType; }

#define <ALLVALUES>D__6_.CTOR_OFFSET UNITYSDK_OFFSET(0x1089AF0)
#define <ALLVALUES>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x108A390)
#define <ALLVALUES>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x108A450)
#define <ALLVALUES>D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x108A770)
#define <ALLVALUES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.INT64_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x108A820)
#define <ALLVALUES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x108A830)
#define <ALLVALUES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x108A880)
#define <ALLVALUES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.INT64_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x108A8D0)
#define <ALLVALUES>D__6_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x108A970)

	inline static constexpr unsigned int <AllValues>d__6_TypeDefinitionIndex = 12921;

	class <AllValues>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Int64 __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Logic::Equipments::EquipmentOptionCollection* __4__this; // 0x28
		::FlatData::EquipmentOptionType* type; // 0x30
		::FlatData::EquipmentOptionType* __3__type; // 0x34
		Il2CppObject* __7__wrap1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ALLVALUES>D__6_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ALLVALUES>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ALLVALUES>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ALLVALUES>D__6___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Int64 System.Collections.Generic.IEnumerator_System.Int64_.get_Current()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + <ALLVALUES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.INT64_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ALLVALUES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ALLVALUES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Int64_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ALLVALUES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.INT64_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ALLVALUES>D__6_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

