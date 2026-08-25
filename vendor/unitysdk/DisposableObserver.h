#pragma once
#include "unitysdk.h"

#define DISPOSABLEOBSERVER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F59570)
#define DISPOSABLEOBSERVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F59460)

	inline static constexpr unsigned int DisposableObserver_TypeDefinitionIndex = 28785;

	class DisposableObserver : public Il2CppObject
	{
	public:
		Il2CppObject* observer; // 0x10

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPOSABLEOBSERVER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPOSABLEOBSERVER_.CTOR_OFFSET))(nullptr);
		}

	};

