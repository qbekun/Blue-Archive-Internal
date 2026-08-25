#pragma once
#include "unitysdk.h"

namespace MX::Core::Math { class IRandomService; }

#define <RANDOMELEMENTBYWEIGHT>D__28`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <RANDOMELEMENTBYWEIGHT>D__28`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_T_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <RandomElementByWeight>d__28`1_TypeDefinitionIndex = 12769;

	class <RandomElementByWeight>d__28`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		Il2CppObject* enumerable; // 0x0
		Il2CppObject* __3__enumerable; // 0x0
		::MX::Core::Math::IRandomService* random; // 0x0
		::MX::Core::Math::IRandomService* __3__random; // 0x0
		Il2CppObject* weightSelector; // 0x0
		Il2CppObject* __3__weightSelector; // 0x0
		::System::Int32 repeatCount; // 0x0
		::System::Int32 __3__repeatCount; // 0x0
		::System::Int32 _weightSum_5__2; // 0x0
		Il2CppObject* _elementByWeightTable_5__3; // 0x0
		::System::Int32 _n_5__4; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <RANDOMELEMENTBYWEIGHT>D__28`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANDOMELEMENTBYWEIGHT>D__28`1_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_T_.get_Current()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_T_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <RANDOMELEMENTBYWEIGHT>D__28`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

