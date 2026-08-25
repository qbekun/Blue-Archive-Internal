#pragma once
#include "unitysdk.h"

#define FINALIZATIONHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define FINALIZATIONHELPER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int FinalizationHelper_TypeDefinitionIndex = 24080;

	class FinalizationHelper : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SlotArray; // 0x0
		::System::Boolean m_trackAllValues; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FINALIZATIONHELPER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINALIZATIONHELPER_FINALIZE_OFFSET))(nullptr);
		}

	};

