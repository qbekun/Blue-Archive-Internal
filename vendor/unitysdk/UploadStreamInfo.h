#pragma once
#include "unitysdk.h"

#define UPLOADSTREAMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x4E0B50)

	inline static constexpr unsigned int UploadStreamInfo_TypeDefinitionIndex = 21310;

	class UploadStreamInfo : public Il2CppObject
	{
	public:
		::System::IO::Stream* Stream; // 0x10
		::System::Int64 Length; // 0x18

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UPLOADSTREAMINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

