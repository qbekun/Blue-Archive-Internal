#pragma once
#include "unitysdk.h"

#define RAWTEXTURE_WRITERAWINT2PACKED_OFFSET UNITYSDK_OFFSET(0xA42D010)
#define RAWTEXTURE_WRITERAWFLOAT4PACKED_OFFSET UNITYSDK_OFFSET(0xA42CF70)

	inline static constexpr unsigned int RawTexture_TypeDefinitionIndex = 30716;

	class RawTexture : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* rgba; // 0x10
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C

		::System::Void WriteRawInt2Packed(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAWTEXTURE_WRITERAWINT2PACKED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteRawFloat4Packed(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAWTEXTURE_WRITERAWFLOAT4PACKED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

