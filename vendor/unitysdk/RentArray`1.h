#pragma once
#include "unitysdk.h"

#define RENTARRAY`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RENTARRAY`1_DISPOSEMANUALLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define RENTARRAY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int RentArray`1_TypeDefinitionIndex = 36126;

	class RentArray`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Array; // 0x0
		::System::Int32 Length; // 0x0
		Il2CppObject* pool; // 0x0

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENTARRAY`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void DisposeManually(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RENTARRAY`1_DISPOSEMANUALLY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RENTARRAY`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

